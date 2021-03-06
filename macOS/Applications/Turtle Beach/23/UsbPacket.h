//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UsbPacket_Command, UsbPacket_Response;

@interface UsbPacket : NSObject <NSCopying>
{
    float _delayTime;
    NSString *_name;
    UsbPacket_Command *_command;
    UsbPacket_Response *_response;
}

@property float delayTime; // @synthesize delayTime=_delayTime;
@property(retain) UsbPacket_Response *response; // @synthesize response=_response;
@property(retain) UsbPacket_Command *command; // @synthesize command=_command;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

