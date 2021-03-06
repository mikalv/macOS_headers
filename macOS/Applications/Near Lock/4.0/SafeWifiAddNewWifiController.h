//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SafeWifiWizzardPage.h"

@class NSButton, NSImageView, NSTextField, SafeWifiNewViewModel;
@protocol SafeWifiAddNewWifiControllerDelegate;

@interface SafeWifiAddNewWifiController : SafeWifiWizzardPage
{
    id <SafeWifiAddNewWifiControllerDelegate> _delegate;
    NSImageView *_mainImage;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_descriptionLabel2;
    NSButton *_addEditButton;
    NSButton *_cancelButton;
    NSButton *_centerCacnelButton;
}

@property(nonatomic) __weak NSButton *centerCacnelButton; // @synthesize centerCacnelButton=_centerCacnelButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *addEditButton; // @synthesize addEditButton=_addEditButton;
@property(nonatomic) __weak NSTextField *descriptionLabel2; // @synthesize descriptionLabel2=_descriptionLabel2;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSImageView *mainImage; // @synthesize mainImage=_mainImage;
@property(nonatomic) __weak id <SafeWifiAddNewWifiControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelToggled:(id)arg1;
- (void)addToggled:(id)arg1;
- (void)showNoConnectedWifi;
- (void)showConnectedWifi;
- (void)updateViewForViewModel;
- (void)updateStrings;

// Remaining properties
@property(retain, nonatomic) SafeWifiNewViewModel *viewModel; // @dynamic viewModel;

@end

