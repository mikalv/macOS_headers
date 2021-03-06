//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SPConsoleMessage : NSObject
{
    BOOL isError;
    NSDate *messageDate;
    NSString *message;
    NSString *messageConnection;
}

+ (id)consoleMessageWithMessage:(id)arg1 date:(id)arg2 connection:(id)arg3;
@property(retain) NSString *messageConnection; // @synthesize messageConnection;
@property(retain) NSString *message; // @synthesize message;
@property(retain) NSDate *messageDate; // @synthesize messageDate;
@property BOOL isError; // @synthesize isError;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 date:(id)arg2 connection:(id)arg3;

@end

