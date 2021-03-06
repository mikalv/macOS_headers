//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSAnimationDelegate-Protocol.h"

@class NSString, NSTextField, NSTrackingArea, TMAColorView;

@interface KNMacPlayToolbarMenuItemViewController : NSViewController <NSAnimationDelegate>
{
    unsigned long long _viewerCount;
    long long _configuration;
    NSTextField *_centerTextField;
    NSTextField *_topTextField;
    NSTextField *_bottomTextField;
    TMAColorView *_backgroundView;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) TMAColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTextField *bottomTextField; // @synthesize bottomTextField=_bottomTextField;
@property(retain, nonatomic) NSTextField *topTextField; // @synthesize topTextField=_topTextField;
@property(retain, nonatomic) NSTextField *centerTextField; // @synthesize centerTextField=_centerTextField;
@property(nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (void).cxx_destruct;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (id)p_viewerCountLabel;
- (void)p_setHighlighted:(BOOL)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

