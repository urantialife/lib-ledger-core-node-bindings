// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#ifndef DJINNI_GENERATED_EVENTPUBLISHER_HPP
#define DJINNI_GENERATED_EVENTPUBLISHER_HPP

#include <cstdint>
#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Event;
class EventBus;
class ExecutionContext;

/** Class representing an event publisher. */
class LIBCORE_EXPORT EventPublisher {
public:
    virtual ~EventPublisher() {}

    /**
     * Get event bus through which publisher broadcast its events.
     * @return EventBus object
     */
    virtual std::shared_ptr<EventBus> getEventBus() = 0;

    /**
     * Broadcast an event through eventbus (to all subscribed receivers to this EventBus).
     * @param event, Event object
     */
    virtual void post(const std::shared_ptr<Event> & event) = 0;

    /**
     * Same as post method but with an sticky event.
     * @param event, Event object
     * @param tag, 32 bits integer, tag of sticky event
     */
    virtual void postSticky(const std::shared_ptr<Event> & event, int32_t tag) = 0;

    /**
     * Relay an event to another EventBus (other than EventPublisher's event bus).
     * @param bus, EventBus object, through which we want to broadcast EventPublisher's event to EventPublisher's receiver
     */
    virtual void relay(const std::shared_ptr<EventBus> & bus) = 0;

    /**
     * Create a new instance of EventPublisher class.
     * @param context, executionContext object, context in which event publisher broadcast its events
     */
    static std::shared_ptr<EventPublisher> newInstance(const std::shared_ptr<ExecutionContext> & context);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_EVENTPUBLISHER_HPP
