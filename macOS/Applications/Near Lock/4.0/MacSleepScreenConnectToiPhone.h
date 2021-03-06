//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSButton, NSImageView, NSTextField;
@protocol MacSleepScreenConnectToiPhoneDelegate;

@interface MacSleepScreenConnectToiPhone : BaseViewController
{
    int _connectTutorialType;
    id <MacSleepScreenConnectToiPhoneDelegate> _delegate;
    NSTextField *_titleLabel;
    NSTextField *_connectLabel;
    NSImageView *_mainImage;
    NSButton *_button;
}

@property(nonatomic) __weak NSButton *button; // @synthesize button=_button;
@property(nonatomic) __weak NSImageView *mainImage; // @synthesize mainImage=_mainImage;
@property(nonatomic) __weak NSTextField *connectLabel; // @synthesize connectLabel=_connectLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int connectTutorialType; // @synthesize connectTutorialType=_connectTutorialType;
@property(nonatomic) __weak id <MacSleepScreenConnectToiPhoneDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonToggled:(id)arg1;
- (void)updateStrings;
- (void)updateViewForNewBluetoothState;
- (void)viewDidLoad;

@end

