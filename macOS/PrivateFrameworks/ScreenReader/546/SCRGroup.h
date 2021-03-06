//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRGroup : SCRMapElement
{
    BOOL _disableContentSummary;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (BOOL)needToRebuildChildren;
- (BOOL)_supportsAlternateUIAction;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (BOOL)alwaysAllowDrag;
- (BOOL)isContainerElement;
- (void)addActionDescription:(id)arg1 toRequest:(id)arg2;
- (void)addItemNameToRequest:(id)arg1;
- (void)_addItemNameToRequest:(id)arg1 forAction:(BOOL)arg2;
- (void)setPreviousSelectionUIElements:(id)arg1;
- (id)previousSelectionUIElements;

@end

