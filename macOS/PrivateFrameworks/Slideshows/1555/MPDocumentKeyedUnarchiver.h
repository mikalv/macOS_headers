//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class MPDocument, NSDictionary;
@protocol MPAssetKeyDelegate;

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver
{
    id <MPAssetKeyDelegate> _assetKeyDelegate;
    NSDictionary *_mediaProperties;
    MPDocument *_parentDocument;
}

@property(nonatomic) MPDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property(nonatomic) NSDictionary *mediaProperties; // @synthesize mediaProperties=_mediaProperties;
@property(nonatomic) id <MPAssetKeyDelegate> assetKeyDelegate; // @synthesize assetKeyDelegate=_assetKeyDelegate;

@end

