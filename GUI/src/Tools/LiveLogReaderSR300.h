/*
 * This file is part of ElasticFusion.
 *
 * Copyright (C) 2015 Imperial College London
 *
 * The use of the code within this file and all code within files that
 * make up the software that is ElasticFusion is permitted for
 * non-commercial purposes only.  The full terms and conditions that
 * apply to the code within this file are detailed within the LICENSE.txt
 * file and at <http://www.imperial.ac.uk/dyson-robotics-lab/downloads/elastic-fusion/elastic-fusion-license/>
 * unless explicitly stated.  By downloading this file you agree to
 * comply with these terms.
 *
 * If you wish to use any of this code for commercial purposes then
 * please email researchcontracts.engineering@imperial.ac.uk.
 *
 */

#ifndef LIVELOGREADERSR300_H_
#define LIVELOGREADERSR300_H_

#include <stdio.h>
#include <stdlib.h>
#include <poll.h>
#include <signal.h>

#include <Utils/Parse.h>

#include "LogReader.h"
#include "SR300Interface.h"

class LiveLogReaderSR300 : public LogReader
{
	public:
		LiveLogReaderSR300(std::string file, bool flipColors);

		virtual ~LiveLogReaderSR300();

        void getNext();

        int getNumFrames();

        bool hasMore();

        bool rewound()
        {
            return false;
        }

        void rewind()
        {

        }

        void getBack()
        {

        }

        void fastForward(int frame)
        {

        }

        const std::string getFile();

        void setAuto(bool value);

		SR300Interface * asus;

	private:
		int64_t lastFrameTime;
		int lastGot;
};

#endif /* LIVELOGREADERSR300_H_ */
