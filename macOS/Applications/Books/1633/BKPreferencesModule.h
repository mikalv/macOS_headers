//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPreferencesModule.h>

@class NSString;
@protocol BKPreferences;

@interface BKPreferencesModule : NSPreferencesModule
{
    id <BKPreferences> _preferencesDelegate;
    NSString *_moduleTitle;
}

@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle=_moduleTitle;
@property(nonatomic) __weak id <BKPreferences> preferencesDelegate; // @synthesize preferencesDelegate=_preferencesDelegate;
- (void).cxx_destruct;
- (void)willBeDisplayed;

@end

