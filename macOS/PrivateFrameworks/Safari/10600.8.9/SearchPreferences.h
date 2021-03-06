//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class NSButton, NSPopUpButton, WebsiteSpecificSearchEditor;

__attribute__((visibility("hidden")))
@interface SearchPreferences : PreferencesModule
{
    WebsiteSpecificSearchEditor *_websiteSpecificSearchEditor;
    NSPopUpButton *_defaultSearchEnginePopUpButton;
    NSButton *_enableParsecCheckbox;
}

@property(nonatomic) __weak NSButton *enableParsecCheckbox; // @synthesize enableParsecCheckbox=_enableParsecCheckbox;
@property(nonatomic) __weak NSPopUpButton *defaultSearchEnginePopUpButton; // @synthesize defaultSearchEnginePopUpButton=_defaultSearchEnginePopUpButton;
@property(retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor; // @synthesize websiteSpecificSearchEditor=_websiteSpecificSearchEditor;
- (void).cxx_destruct;
- (void)changeDefaultSearchEngine:(id)arg1;
- (void)_updateDefaultSearchEngineMenu;
- (void)toggleParsecEnabled:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)initializeFromDefaults;
- (id)helpAnchor;
- (id)imageForPreferenceNamed:(id)arg1;

@end

