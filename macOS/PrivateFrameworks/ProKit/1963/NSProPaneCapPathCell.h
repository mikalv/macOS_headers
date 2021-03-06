//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProPathCell.h>

#import <ProKit/NSProPaneCapProtocol-Protocol.h>

@interface NSProPaneCapPathCell : NSProPathCell <NSProPaneCapProtocol>
{
    CDStruct_ae8b4f33 _paneCapFlags;
    void *_paneCapReserved1;
    void *_paneCapReserved2;
    void *_paneCapReserved3;
}

+ (id)_navBarFacet;
+ (Class)pathComponentCellClass;
+ (void)initialize;
- (void)_autoUpdateCellContents;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setFocusRingType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (id)_proLabelFont;
- (void)_decodePaneCapWithCoder:(id)arg1;
- (void)_encodePaneCapWithCoder:(id)arg1;
@property int paneCapTint; // @dynamic paneCapTint;
@property int paneCapStyle; // @dynamic paneCapStyle;
- (BOOL)isValidControlSize:(unsigned long long)arg1;

@end

