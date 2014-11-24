CXX_FLAGS=-g -Wall -std=c++11 -Wno-reorder
DIR_H=src/Header
DIR_S=src/Source
DIR_ROBOT_H=$(DIR_H)/Robot
DIR_ROBOT_S=$(DIR_S)/Robot
DIR_ETAT_H=$(DIR_H)/Etat
DIR_ETAT_S=$(DIR_S)/Etat
DIR_AFF_H=$(DIR_H)/Affichage
DIR_AFF_S=$(DIR_S)/Affichage
DIR_O=bin
LINK_CXX = g++

#-------------------------------------------------

ALL = robot

robot : $(DIR_O)/main.o $(DIR_O)/Robot.o $(DIR_O)/EtatRobot.o $(DIR_O)/Position.o $(DIR_O)/Plot.o \
		$(DIR_O)/Objet.o $(DIR_O)/EtatRobotFige.o $(DIR_O)/EtatRobotEnRoute.o $(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o \
		$(DIR_O)/EtatRobotEnRouteEnCharge.o $(DIR_O)/EtatRobotEnRouteAVideFacePlot.o $(DIR_O)/EtatRobotEnRouteAVide.o \
		$(DIR_O)/Observable.o $(DIR_O)/Observateur.o
	$(LINK_CXX) -o robot $(DIR_O)/main.o $(DIR_O)/Robot.o $(DIR_O)/EtatRobot.o $(DIR_O)/Position.o \
		$(DIR_O)/Plot.o $(DIR_O)/Objet.o $(DIR_O)/EtatRobotFige.o $(DIR_O)/EtatRobotEnRoute.o \
		$(DIR_O)/EtatRobotEnRouteEnChargeFacePlot.o $(DIR_O)/EtatRobotEnRouteEnCharge.o \
		$(DIR_O)/EtatRobotEnRouteAVideFacePlot.o $(DIR_O)/EtatRobotEnRouteAVide.o \
		$(DIR_O)/Observable.o $(DIR_O)/Observateur.o 

$(DIR_O)/main.o : $(DIR_ROBOT_H)/Robot.h $(DIR_ROBOT_H)/Plot.h $(DIR_ROBOT_H)/Objet.h
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

clean :
	-rm -f $(DIR_O)/*.o $(ALL)


