//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GHViewController.h"

#import "MASPreferencesViewController-Protocol.h"

@class GHDotComLoginView, GHEnterpriseLoginView, NSImage, NSString;

@interface GHAccountsPreferencesViewController : GHViewController <MASPreferencesViewController>
{
    GHDotComLoginView *_dotComLoginView;
    GHEnterpriseLoginView *_enterpriseLoginView;
}

+ (id)nibName;
@property(retain, nonatomic) GHEnterpriseLoginView *enterpriseLoginView; // @synthesize enterpriseLoginView=_enterpriseLoginView;
@property(retain, nonatomic) GHDotComLoginView *dotComLoginView; // @synthesize dotComLoginView=_dotComLoginView;
- (void).cxx_destruct;
- (void)loadView;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

