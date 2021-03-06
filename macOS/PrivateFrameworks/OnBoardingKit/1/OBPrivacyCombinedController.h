//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface OBPrivacyCombinedController : NSWindowController
{
    BOOL _allowsOpeningSafari;
    BOOL _presentedFromPrivacyPane;
}

+ (void)presentPrivacyCombinedControllerOnWindow:(id)arg1 identifiers:(id)arg2 dismissHandler:(CDUnknownBlockType)arg3;
+ (void)presentPrivacyCombinedControllerOnWindow:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
@property BOOL presentedFromPrivacyPane; // @synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane;
@property BOOL allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
- (void)reloadWindow;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;

@end

