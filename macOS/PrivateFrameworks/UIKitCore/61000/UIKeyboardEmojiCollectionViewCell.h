//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIKeyboardEmoji, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell
{
    UILabel *_emojiLabel;
    UIKeyboardEmoji *_emoji;
}

@property(copy, nonatomic) UIKeyboardEmoji *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;
- (id)debugDescription;
@property(nonatomic) long long emojiFontSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

