//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class ACCHTTPHandler, ACM2SVHTTPImageDownloadHandler, ACM2SVTransportController;

@protocol ACM2SVTransportControllerDelegate <NSObject>
- (void)twoSVTransportController:(ACM2SVTransportController *)arg1 scheduleHandler:(ACCHTTPHandler *)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;

@optional
- (void)twoSVTransportControllerCancelFetchingImages:(ACM2SVTransportController *)arg1;
- (void)twoSVTransportController:(ACM2SVTransportController *)arg1 fetchImageWithHandler:(ACM2SVHTTPImageDownloadHandler *)arg2 completion:(void (^)(NSData *))arg3;
@end

