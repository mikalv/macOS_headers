//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBCMove : NSObject
{
    int fCommand;
    unsigned char fFromSquare;
    unsigned char fToSquare;
    unsigned char fPiece;
    unsigned char fPromotion;
    unsigned char fVictim;
    int fCastling;
    BOOL fEnPassant;
    BOOL fCheck;
    BOOL fCheckMate;
    BOOL fAnimate;
}

+ (BOOL)compactMoveIsWin:(unsigned int)arg1;
+ (id)moveFromEngineMove:(id)arg1;
+ (id)newFromEngineMove:(id)arg1;
+ (id)moveFromCompactMove:(unsigned int)arg1;
+ (id)newFromCompactMove:(unsigned int)arg1;
+ (id)moveWithCommand:(int)arg1;
+ (id)newWithCommand:(int)arg1;
- (id)engineMove;
- (id)check;
- (id)destination;
- (id)destinationForTitle:(BOOL)arg1;
- (id)operation;
- (id)origin;
- (id)localizedText;
- (id)pieceLetter:(unsigned char)arg1 forDrop:(BOOL)arg2;
- (id)initFromEngineMove:(id)arg1;
- (id)initFromCompactMove:(unsigned int)arg1;
- (id)initWithCommand:(int)arg1;

@end

