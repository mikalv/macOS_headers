//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ROCKConnectionManager : NSObject
{
    BOOL _enableMessageQueueSending;
    CDUnknownBlockType _connectionManagerHandler;
    unsigned long long _messageQueueInvocationMode;
    NSObject<OS_dispatch_queue> *_managedConnectionsQueue;
    NSObject<OS_dispatch_queue> *_managedRemoteConnectionsQueue;
    NSMapTable *_managedConnections;
    unsigned long long _nextAvailableManagedConnectionIndex;
    NSMapTable *_managedRemoteConnections;
    NSMutableDictionary *_managedServiceUUIDs;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (id)connectionManagerWithHandlerQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(retain, nonatomic) NSMutableDictionary *managedServiceUUIDs; // @synthesize managedServiceUUIDs=_managedServiceUUIDs;
@property(retain, nonatomic) NSMapTable *managedRemoteConnections; // @synthesize managedRemoteConnections=_managedRemoteConnections;
@property(nonatomic) unsigned long long nextAvailableManagedConnectionIndex; // @synthesize nextAvailableManagedConnectionIndex=_nextAvailableManagedConnectionIndex;
@property(retain, nonatomic) NSMapTable *managedConnections; // @synthesize managedConnections=_managedConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedRemoteConnectionsQueue; // @synthesize managedRemoteConnectionsQueue=_managedRemoteConnectionsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConnectionsQueue; // @synthesize managedConnectionsQueue=_managedConnectionsQueue;
@property(nonatomic) unsigned long long messageQueueInvocationMode; // @synthesize messageQueueInvocationMode=_messageQueueInvocationMode;
@property(nonatomic) BOOL enableMessageQueueSending; // @synthesize enableMessageQueueSending=_enableMessageQueueSending;
@property(copy, nonatomic) CDUnknownBlockType connectionManagerHandler; // @synthesize connectionManagerHandler=_connectionManagerHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHandlerQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

