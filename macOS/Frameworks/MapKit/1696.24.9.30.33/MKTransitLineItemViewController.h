//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

#import <MapKit/MKPlaceCardActionControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardEncyclopedicControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardHeaderViewControllerDelegate-Protocol.h>
#import <MapKit/MKStackingViewControllerDelegate-Protocol.h>
#import <MapKit/_MKInfoCardAnaylticsDelegate-Protocol.h>
#import <MapKit/_MKInfoCardController-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKPlaceCardActionItem, MKPlaceCardActionsViewController, MKPlaceCardHeaderViewController, NSMutableArray, NSNumber, NSString;
@protocol GEOTransitLineItem, MKTransitLineItemViewControllerDelegate;

@interface MKTransitLineItemViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnaylticsDelegate>
{
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceCardActionsViewController *_actionsViewController;
    NSMutableArray *_placeActionItemsArray;
    BOOL _loading;
    id <GEOTransitLineItem> _transitLineItem;
    id <MKTransitLineItemViewControllerDelegate> _delegate;
    NSNumber *_favorited;
    MKPlaceCardActionItem *_addToFavoritesItem;
    MKPlaceCardActionItem *_removeFromFavoritesItem;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
}

@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) MKPlaceCardActionItem *removeFromFavoritesItem; // @synthesize removeFromFavoritesItem=_removeFromFavoritesItem;
@property(retain, nonatomic) MKPlaceCardActionItem *addToFavoritesItem; // @synthesize addToFavoritesItem=_addToFavoritesItem;
@property(retain, nonatomic) NSNumber *favorited; // @synthesize favorited=_favorited;
@property(nonatomic) __weak id <MKTransitLineItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> transitLineItem; // @synthesize transitLineItem=_transitLineItem;
- (void).cxx_destruct;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (int)mapTypeForPlaceCardHeaderViewController:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectRidesharingButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectOpenContactButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectShareLocationButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectRerouteButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectDirectionsButton:(id)arg1 withTransportTypePreference:(id)arg2;
- (void)placeCardheaderHeaderViewControllerDidSelectActionButton:(id)arg1;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (void)_updateViewControllers;
- (void)resetNearestStation;
- (void)setTransitLineItem:(id)arg1 loading:(BOOL)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setTransitLineItem:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithTransitLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

