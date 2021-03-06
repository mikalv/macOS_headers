//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AppViewContentController-Protocol.h"
#import "CALayerDelegate-Protocol.h"

@class NSString, WebView;

@interface WebViewController : NSViewController <AppViewContentController, CALayerDelegate>
{
    NSString *urlToLoad;
    WebView *_webView;
}

@property WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (void)closeButtonSelected:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 withLoadUrl:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

