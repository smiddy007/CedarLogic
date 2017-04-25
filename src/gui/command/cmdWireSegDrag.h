
#pragma once
#include "klsCommand.h"
#include <map>
#include "../wire/wireSegment.h"

// cmdWireSegDrag - Set's a wire's tree after dragging a segment
class cmdWireSegDrag : public klsCommand {
public:
	cmdWireSegDrag(GUICircuit* gCircuit, GUICanvas* gCanvas, IDType wireID);

	bool Do() override;

	bool Undo() override;

private:
	std::map<long, wireSegment> oldSegMap;
	std::map<long, wireSegment> newSegMap;
	unsigned long wireID;
};
