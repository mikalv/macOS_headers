//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSWindow;

@interface RUApplicationDelegate : NSObject
{
    BOOL shouldTerminateAfterLastWindowClosed;
    NSWindow *_prefs;
}

+ (void)initialize;
- (void)checkCardIsReady:(id)arg1;
- (BOOL)hasRAIDCard;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

@end

