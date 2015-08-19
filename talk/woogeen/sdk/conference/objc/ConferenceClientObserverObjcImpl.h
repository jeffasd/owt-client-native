/*
 * Intel License
 */

#ifndef WOOGEEN_CONFERENCE_OBJC_CONFERENCECLIENTOBSERVEROBJCIMPL_H_
#define WOOGEEN_CONFERENCE_OBJC_CONFERENCECLIENTOBSERVEROBJCIMPL_H_

#include "talk/woogeen/sdk/conference/conferenceclient.h"
#import "talk/woogeen/sdk/conference/objc/public/RTCConferenceClientObserver.h"
#import "talk/woogeen/sdk/base/objc/public/RTCRemoteStream.h"

namespace woogeen {

class ConferenceClientObserverObjcImpl : public ConferenceClientObserver {
  public:
    ConferenceClientObserverObjcImpl(id<RTCConferenceClientObserver> observer);

  protected:
    virtual void OnStreamAdded(std::shared_ptr<woogeen::RemoteCameraStream> stream) override;
    virtual void OnStreamAdded(std::shared_ptr<woogeen::RemoteScreenStream> stream) override;
    virtual void OnStreamAdded(std::shared_ptr<woogeen::RemoteMixedStream> stream) override;
    virtual void OnStreamRemoved(std::shared_ptr<woogeen::RemoteCameraStream> stream) override;
    virtual void OnStreamRemoved(std::shared_ptr<woogeen::RemoteScreenStream> stream) override;
    virtual void OnStreamRemoved(std::shared_ptr<woogeen::RemoteMixedStream> stream) override;
    virtual void OnMessageReceived(std::string& sender_id, std::string& message) override;

  private:
    id<RTCConferenceClientObserver> observer_;
};

}

#endif  // WOOGEEN_CONFERENCE_OBJC_CONFERENCECLIENTOBSERVEROBJCIMPL_H_
