main: Menu.o Arc.o Graphe.o GrapheNonOriente.o GrapheOriente.o PbTritopologique.o PbTSP.o Sommet.o                       
	g++ Menu.o Arc.o Graphe.o GrapheNonOriente.o GrapheOriente.o PbTritopologique.o PbTSP.o Sommet.o -o main       

Sommet.o: Sommet.cpp Sommet.hpp
	g++ -c Sommet.cpp

Arc.o: Arc.cpp Arc.hpp Sommet.hpp
	g++ -c Arc.cpp

Graphe.o: Graphe.cpp Arc.hpp Sommet.hpp Graphe.hpp
	g++ -c Graphe.cpp

GrapheOriente.o: GrapheOriente.cpp Arc.hpp Sommet.hpp Graphe.hpp GrapheOriente.hpp
	g++ -c  GrapheOriente.cpp

GrapheNonOriente.o: GrapheNonOriente.cpp Arc.hpp Sommet.hpp Graphe.hpp GrapheNonOriente.hpp
	g++ -c  GrapheNonOriente.cpp

PbTritopologique.o : PbTritopologique.cpp Arc.hpp Sommet.hpp Graphe.hpp GrapheOriente.hpp PbTritopologique.hpp
	g++ -c PbTritopologique.cpp

PbTSP.o: PbTSP.cpp Arc.hpp Sommet.hpp Graphe.hpp GrapheNonOriente.hpp PbTSP.hpp
	g++ -c PbTSP.cpp

Menu.o: Menu.cpp Arc.hpp Sommet.hpp Graphe.hpp GrapheOriente.hpp PbTritopologique.hpp GrapheNonOriente.hpp PbTSP.hpp Menu.hpp
	g++ -c Menu.cpp

clean:
	rm *.o