//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/CATTaskClientDelegate-Protocol.h>
#import <DeviceManagement/DMFTransportProvider-Protocol.h>

@class CATOperationQueue, CATTaskClient, NSSet, NSString;
@protocol DMFTransportProvider;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider>
{
    BOOL _isConnected;
    BOOL _isDeviceConnection;
    id <DMFTransportProvider> _transportProvider;
    CATTaskClient *_taskClient;
    CATOperationQueue *_operationQueue;
}

+ (id)_userRequestClasses;
+ (id)_deviceRequestClasses;
+ (id)_deviceOrUserRequestClasses;
+ (id)watchOSRequestClasses;
+ (id)tvOSRequestClasses;
+ (id)macOSRequestClasses;
+ (id)iOSRequestClasses;
+ (id)currentPlatformRequestClasses;
+ (id)connectionForAppleID:(id)arg1;
+ (id)connectionForUID:(unsigned int)arg1;
+ (id)currentUserConnection;
+ (id)systemConnection;
+ (id)sharedConnection;
@property(nonatomic) BOOL isDeviceConnection; // @synthesize isDeviceConnection=_isDeviceConnection;
@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;
@property(readonly, nonatomic) __weak id <DMFTransportProvider> transportProvider; // @synthesize transportProvider=_transportProvider;
- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidInvalidate:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidConnect:(id)arg1;
- (id)makeNewTransport;
- (void)invalidate;
- (id)progressForAllInflightRequests;
- (id)prepareOperationForRequest:(id)arg1;
- (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *requestClasses;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2;
- (id)initWithUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

