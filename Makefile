CXX_FLAGS=-g -Wall -std=c++11 -Wno-reorder
DIR_H=src/Header
DIR_S=src/Source
DIR_ROBOT_H=$(DIR_H)/Robot
DIR_ROBOT_S=$(DIR_S)/Robot
DIR_ETAT_H=$(DIR_H)/Etat
DIR_ETAT_S=$(DIR_S)/Etat
DIR_AFF_H=$(DIR_H)/Affichage
DIR_AFF_S=$(DIR_S)/Affichage
DIR_CMD_H=$(DIR_H)/Commande
DIR_CMD_S=$(DIR_S)/Commande
DIR_O=bin
LINK_CXX = g++

#-------------------------------------------------

ALL = robot

robot : $(DIR_O)/main.o $(DIR_O)/Robot.o $(DIR_O)/EtatRobot.o $(DIR_O)/Position.o $(DIR_O)/Plot.o $(DIR_O)/Objet.o \
		$(DIR_O)/EtatRobotFige.o $(DIR_O)/EtatRobotEnRoute.o $(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o \
		$(DIR_O)/EtatRobotEnRouteEnCharge.o $(DIR_O)/EtatRobotEnRouteAVideFacePlot.o $(DIR_O)/EtatRobotEnRouteAVide.o \
		$(DIR_O)/Observable.o $(DIR_O)/Observateur.o \
		$(DIR_O)/Commande.o $(DIR_O)/CommandeAvancer.o $(DIR_O)/CommandePeser.o $(DIR_O)/CommandePoser.o \
		$(DIR_O)/CommandeRencontrerPlot.o $(DIR_O)/CommandeRepartir.o $(DIR_O)/CommandeRobot.o $(DIR_O)/CommandeSaisir.o \
		$(DIR_O)/CommandeEvaluer.o $(DIR_O)/CommandeFiger.o $(DIR_O)/CommandeTourner.o \
		$(DIR_O)/CommandeMacro.o $(DIR_O)/CommandeDefMacro.o $(DIR_O)/CommandeAppeler.o \
		$(DIR_O)/Invocateur.o
	$(LINK_CXX) -o robot \
		$(DIR_O)/main.o $(DIR_O)/Robot.o $(DIR_O)/EtatRobot.o $(DIR_O)/Position.o $(DIR_O)/Plot.o $(DIR_O)/Objet.o \
		$(DIR_O)/EtatRobotFige.o $(DIR_O)/EtatRobotEnRoute.o $(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o \
		$(DIR_O)/EtatRobotEnRouteEnCharge.o $(DIR_O)/EtatRobotEnRouteAVideFacePlot.o $(DIR_O)/EtatRobotEnRouteAVide.o \
		$(DIR_O)/Observable.o $(DIR_O)/Observateur.o \
		$(DIR_O)/Commande.o $(DIR_O)/CommandeAvancer.o $(DIR_O)/CommandePeser.o $(DIR_O)/CommandePoser.o \
		$(DIR_O)/CommandeRencontrerPlot.o $(DIR_O)/CommandeRepartir.o $(DIR_O)/CommandeRobot.o $(DIR_O)/CommandeSaisir.o \
		$(DIR_O)/CommandeEvaluer.o $(DIR_O)/CommandeFiger.o $(DIR_O)/CommandeTourner.o \
		$(DIR_O)/CommandeMacro.o $(DIR_O)/CommandeDefMacro.o $(DIR_O)/CommandeAppeler.o \
		$(DIR_O)/Invocateur.o

$(DIR_O)/main.o : $(DIR_ROBOT_H)/Robot.h $(DIR_ROBOT_H)/Plot.h $(DIR_ROBOT_H)/Objet.h $(DIR_CMD_H)/Invocateur.h $(DIR_CMD_H)/Commande.h 
	$(LINK_CXX) -o $(DIR_O)/main.o -c $(DIR_S)/main.cpp $(CXX_FLAGS)

$(DIR_O)/Robot.o : $(DIR_ROBOT_H)/Robot.h $(DIR_ETAT_H)/EtatRobot.h $(DIR_ROBOT_H)/Position.h \
		$(DIR_ROBOT_H)/Plot.h $(DIR_ROBOT_H)/Objet.h
	$(LINK_CXX) -o $(DIR_O)/Robot.o -c $(DIR_ROBOT_S)/Robot.cpp $(CXX_FLAGS)

$(DIR_O)/Position.o : $(DIR_ROBOT_H)/Position.h
	$(LINK_CXX) -o $(DIR_O)/Position.o -c $(DIR_ROBOT_S)/Position.cpp $(CXX_FLAGS)

$(DIR_O)/Plot.o : $(DIR_ROBOT_H)/Plot.h
	$(LINK_CXX) -o $(DIR_O)/Plot.o -c $(DIR_ROBOT_S)/Plot.cpp $(CXX_FLAGS)

$(DIR_O)/Objet.o : $(DIR_ROBOT_H)/Objet.h
	$(LINK_CXX) -o $(DIR_O)/Objet.o -c $(DIR_ROBOT_S)/Objet.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobot.o : $(DIR_ETAT_H)/EtatRobot.h $(DIR_ROBOT_H)/Robot.h $(DIR_ROBOT_H)/Plot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobot.o -c $(DIR_ETAT_S)/EtatRobot.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotFige.o : $(DIR_ETAT_H)/EtatRobotFige.h $(DIR_ETAT_H)/EtatRobot.h \
		$(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotFige.o -c $(DIR_ETAT_S)/EtatRobotFige.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotEnRoute.o : $(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ETAT_H)/EtatRobot.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotEnRoute.o -c $(DIR_ETAT_S)/EtatRobotEnRoute.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o : $(DIR_ETAT_H)/EtatRobotEnRouteEnChargeFacePlot.h \
		$(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o -c $(DIR_ETAT_S)/EtatRobotEnRouteEnChargeFacePlot.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotEnRouteEnCharge.o : $(DIR_ETAT_H)/EtatRobotEnRouteEnCharge.h \
		$(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotEnRouteEnCharge.o -c $(DIR_ETAT_S)/EtatRobotEnRouteEnCharge.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotEnRouteAVideFacePlot.o : $(DIR_ETAT_H)/EtatRobotEnRouteAVideFacePlot.h \
		$(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotEnRouteAVideFacePlot.o -c $(DIR_ETAT_S)/EtatRobotEnRouteAVideFacePlot.cpp $(CXX_FLAGS)

$(DIR_O)/EtatRobotEnRouteAVide.o : $(DIR_ETAT_H)/EtatRobotEnRouteAVide.h \
		$(DIR_ETAT_H)/EtatRobotEnRoute.h $(DIR_ROBOT_H)/Robot.h
	$(LINK_CXX) -o $(DIR_O)/EtatRobotEnRouteAVide.o -c $(DIR_ETAT_S)/EtatRobotEnRouteAVide.cpp $(CXX_FLAGS)

$(DIR_O)/Observable.o : $(DIR_AFF_H)/Observable.h
	$(LINK_CXX) -o $(DIR_O)/Observable.o -c $(DIR_AFF_S)/Observable.cpp $(CXX_FLAGS)

$(DIR_O)/Observateur.o : $(DIR_AFF_H)/Observateur.h
	$(LINK_CXX) -o $(DIR_O)/Observateur.o -c $(DIR_AFF_S)/Observateur.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeAvancer.o : $(DIR_CMD_H)/CommandeAvancer.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeAvancer.o -c $(DIR_CMD_S)/CommandeAvancer.cpp $(CXX_FLAGS)
	
$(DIR_O)/CommandePeser.o : $(DIR_CMD_H)/CommandePeser.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandePeser.o -c $(DIR_CMD_S)/CommandePeser.cpp $(CXX_FLAGS)
	
$(DIR_O)/CommandePoser.o : $(DIR_CMD_H)/CommandePoser.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandePoser.o -c $(DIR_CMD_S)/CommandePoser.cpp $(CXX_FLAGS)
	
$(DIR_O)/CommandeRencontrerPlot.o : $(DIR_CMD_H)/CommandeRencontrerPlot.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeRencontrerPlot.o -c $(DIR_CMD_S)/CommandeRencontrerPlot.cpp $(CXX_FLAGS)
	
$(DIR_O)/CommandeRepartir.o : $(DIR_CMD_H)/CommandeRepartir.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeRepartir.o -c $(DIR_CMD_S)/CommandeRepartir.cpp $(CXX_FLAGS)
	
$(DIR_O)/CommandeSaisir.o : $(DIR_CMD_H)/CommandeSaisir.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeSaisir.o -c $(DIR_CMD_S)/CommandeSaisir.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeEvaluer.o : $(DIR_CMD_H)/CommandeEvaluer.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeEvaluer.o -c $(DIR_CMD_S)/CommandeEvaluer.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeFiger.o : $(DIR_CMD_H)/CommandeFiger.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeFiger.o -c $(DIR_CMD_S)/CommandeFiger.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeTourner.o : $(DIR_CMD_H)/CommandeTourner.h $(DIR_CMD_H)/CommandeRobot.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeTourner.o -c $(DIR_CMD_S)/CommandeTourner.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeDefMacro.o : $(DIR_CMD_H)/CommandeDefMacro.h $(DIR_CMD_H)/CommandeMacro.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeDefMacro.o -c $(DIR_CMD_S)/CommandeDefMacro.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeAppeler.o : $(DIR_CMD_H)/CommandeAppeler.h $(DIR_CMD_H)/CommandeMacro.h 
	$(LINK_CXX) -o $(DIR_O)/CommandeAppeler.o -c $(DIR_CMD_S)/CommandeAppeler.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeMacro.o : $(DIR_CMD_H)/CommandeMacro.h $(DIR_CMD_H)/Commande.h
	$(LINK_CXX) -o $(DIR_O)/CommandeMacro.o -c $(DIR_CMD_S)/CommandeMacro.cpp $(CXX_FLAGS)
	
$(DIR_O)/Invocateur.o : $(DIR_CMD_H)/Invocateur.h
	$(LINK_CXX) -o $(DIR_O)/Invocateur.o -c $(DIR_CMD_S)/Invocateur.cpp $(CXX_FLAGS)

$(DIR_O)/CommandeRobot.o : $(DIR_CMD_H)/CommandeRobot.h $(DIR_CMD_H)/Commande.h
	$(LINK_CXX) -o $(DIR_O)/CommandeRobot.o -c $(DIR_CMD_S)/CommandeRobot.cpp $(CXX_FLAGS)

$(DIR_O)/Commande.o : $(DIR_CMD_H)/Commande.h
	$(LINK_CXX) -o $(DIR_O)/Commande.o -c $(DIR_CMD_S)/Commande.cpp $(CXX_FLAGS)

clean :
	-rm -f $(DIR_O)/*.o $(ALL)


