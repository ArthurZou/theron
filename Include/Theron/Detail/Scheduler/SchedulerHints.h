// Copyright (C) by Ashton Mason. See LICENSE.txt for licensing information.
#ifndef THERON_DETAIL_SCHEDULER_SCHEDULERHINTS_H
#define THERON_DETAIL_SCHEDULER_SCHEDULERHINTS_H


#include <Theron/BasicTypes.h>
#include <Theron/Defines.h>


namespace Theron
{
namespace Detail
{


/**
Wraps up various bits of information available to scheduler queuing policies.
*/
class SchedulerHints
{
public:

    THERON_FORCEINLINE SchedulerHints()
    {
    }

    bool mSend;                     ///< Indicates whether the mailbox is being scheduled due receiving a message.
    uint32_t mPredictedSendCount;   ///< Number of messages sent by the current handler on its last invocation.
    uint32_t mSendIndex;            ///< Index of this message send within the current handler.
    uint32_t mMessageCount;         ///< Number of messages queued in the mailbox currently being processed.

private:

    SchedulerHints(const SchedulerHints &other);
    SchedulerHints &operator=(const SchedulerHints &other);
};


} // namespace Detail
} // namespace Theron


#endif // THERON_DETAIL_SCHEDULER_SCHEDULERHINTS_H
