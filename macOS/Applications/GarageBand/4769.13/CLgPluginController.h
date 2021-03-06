//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "LgPluginController-Protocol.h"
#import "LgPluginDataController-Protocol.h"
#import "MAIdleCallback-Protocol.h"
#import "MAPluginWindowContentDataSource-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CLgPluginManager, LgPluginControllerPluginProxy, MAPluginWindowContent, NSArray, NSDictionary, NSMutableDictionary, NSString, NSView, NSWindow;
@protocol MAPluginWindow;

@interface CLgPluginController : NSWindowController <LgPluginDataController, MAPluginWindowContentDataSource, LgPluginController, NSWindowDelegate, MAIdleCallback>
{
    CLgPluginManager *_pluginManager;
    MAPluginWindowContent *_pluginContent;
    NSView *_pluginEditorView;
    NSDictionary *_confBtnDict;
    NSArray *_extParGroups;
    NSString *_pluginName;
    NSString *_sideChainName;
    NSString *_windowTitle;
    NSString *_presetName;
    NSMutableDictionary *_pluginScaleFactorDictionary;
    NSMutableDictionary *_pluginSelectedEditorDictionary;
    NSMutableDictionary *_pluginDesignSizeDictionary;
    double _guiWidth;
    double _guiHeight;
    double _guiScale;
    double _guiScaleSelectedFromMenu;
    BOOL _showsControlsArea;
    BOOL _showsSideChain;
    BOOL _parametersAlwaysVisible;
    BOOL _extParEnabled;
    BOOL _showsExtendedParameters;
    BOOL _showsControlsView;
    int _numberOfVisibleExtendedParameterRows;
    int _numberOfExtendedParameterColumns;
    BOOL _wasOrderedOut;
    BOOL _pluginWindowIsClosing;
    BOOL _refreshingAfterLiveResize;
    BOOL _refreshingShouldKeepPluginView;
    BOOL _hideViewOptionsAndLinkButton;
    int _channelStripIndex;
    int _insertSlot;
    BOOL _fMidiPlugins;
    LgPluginControllerPluginProxy *_pluginProxy;
    BOOL _isSlaved;
    NSView *_multiMonoConfigurationView;
    long long _lMultiMonoGroup;
    struct CDiskMenu *_pSettingsMenu;
    BOOL _bDisplaySettingNameInTitle;
    BOOL _bIsFrozen;
    BOOL _bComparePossible;
    BOOL _bForceHideExtendedParameters;
    BOOL _bForceShowExtendedParameters;
    unsigned long long _instanceIdentifier;
    BOOL _currentlySettingUpPluginStructure;
    NSString *_pluginShortName;
    unsigned long long _mScalingMode;
}

+ (BOOL)lastClosedControllerWasSlaved;
+ (void)setLastClosedControllerWasSlaved:(BOOL)arg1;
+ (BOOL)lastClosedPannerControllerWasSlaved;
+ (void)setLastClosedPannerControllerWasSlaved:(BOOL)arg1;
+ (id)plugWindowIDDictWithChannelStripIndex:(int)arg1 insert:(int)arg2 fMidiPlugins:(BOOL)arg3 linkState:(BOOL)arg4;
+ (id)plugWindowIDDictWithChannelStripIndex:(int)arg1 insert:(int)arg2 fMidiPlugins:(BOOL)arg3;
+ (id)instanceForIdentifier:(unsigned long long)arg1;
+ (void)initialize;
+ (BOOL)pluginIsClosing;
+ (id)createUserStringForPresetAtPath:(id)arg1;
@property(nonatomic) BOOL hideViewOptionsAndLinkButton; // @synthesize hideViewOptionsAndLinkButton=_hideViewOptionsAndLinkButton;
@property unsigned long long identifier; // @synthesize identifier=_instanceIdentifier;
@property unsigned long long mScalingMode; // @synthesize mScalingMode=_mScalingMode;
@property BOOL parametersAlwaysVisible; // @synthesize parametersAlwaysVisible=_parametersAlwaysVisible;
@property(retain, nonatomic) NSArray *extendedParametersGroups; // @synthesize extendedParametersGroups=_extParGroups;
@property(retain, nonatomic) NSDictionary *configurationButtons; // @synthesize configurationButtons=_confBtnDict;
@property(retain, nonatomic) NSString *presetName; // @synthesize presetName=_presetName;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(retain, nonatomic) NSString *pluginShortName; // @synthesize pluginShortName=_pluginShortName;
@property(retain, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(retain, nonatomic) NSString *sideChainName; // @synthesize sideChainName=_sideChainName;
@property(retain, nonatomic) NSView *pluginEditorView; // @synthesize pluginEditorView=_pluginEditorView;
- (void)idle_checkBypassStateForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)idle_checkPresetNameForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)idle_checkMultiMonoConfigurationForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)idle_checkCompareButtonFlagsForPlugin:(struct AUDIOPLUGIN *)arg1 checkEnableState:(BOOL)arg2;
- (void)idle_checkPluginParametersForPlugin:(struct AUDIOPLUGIN *)arg1 refreshCacheIfNecessary:(BOOL)arg2;
- (void)idle_checkParameterControlsNeedRefreshForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)idle_checkPluginValuesAgainstCachedValuesForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)addEditorSelectionOfPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)addScaleFactorsOfPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)updateWindowStyleMask;
- (double)maxScaleFactor;
- (void)updateScaleOfCustomPluginView;
- (void)setDesignSizeFromUserData;
- (void)handleWindowToolbarButtonAction:(id)arg1;
- (void)validateSlavedMode;
- (BOOL)compareEnabled;
- (BOOL)compareActive;
- (void)setPluginManager:(id)arg1;
- (BOOL)hasResizableCustomPluginView;
- (BOOL)guiViewIsShown;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)handlePluginViewInvalidationNotification:(id)arg1;
- (void)handleSheetNotifications:(id)arg1;
- (void)handleFlagsChangedNotification:(id)arg1;
- (void)pluginWindowShowGUI;
- (id)pluginManager;
- (id)pluginContent;
- (void)setPlugInRefDict:(id)arg1;
- (void)updateGUI;
- (void)closePlugin;
- (void)closePluginGUI;
- (void)sizeToFitScreenSize:(struct CGRect)arg1;
- (BOOL)setupWindowStructureForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)resetDesignSizeForCurrentEditor;
- (void)setupPluginStructure;
- (BOOL)compareButtonStateForPlugin:(struct AUDIOPLUGIN *)arg1;
- (void)setupPluginStructureEmpty;
- (void)setPlugInRefNoSetup_local:(id)arg1;
- (void)idleCallback;
- (void)handleUM_GNAME:(id)arg1;
- (void)handleUM_CHAUCONF:(id)arg1;
- (void)handleUM_TRACKSEL:(id)arg1;
- (void)updateFreezePlateForPlugin:(struct AUDIOPLUGIN *)arg1;
- (BOOL)checkPluginIsOnSelectedTrack:(struct AUDIOPLUGIN *)arg1;
@property(readonly) NSWindow<MAPluginWindow> *pluginWindow;
- (void)disconnectPlugin;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 plugWindowID:(id)arg2 windowState:(const struct LgPluginGUIState *)arg3;
- (id)initWithWindow:(id)arg1;
- (id)layoutDictForWindowController;
- (void)applyPluginWindowState:(const struct LgPluginGUIState *)arg1;
- (struct LgPluginGUIState)pluginWindowState;
- (void)savePluginWindowState:(struct LgPluginGUIState)arg1;
- (BOOL)isMouseOnTopOfPluginView;
- (struct CGRect)windowFrameForProposedFrame:(struct CGRect)arg1;
- (void)closePluginView;
- (void)handleDidEndLiveResize:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)synchronizeWindowTitleWithDocumentName;
- (void)updateDefaultEditor:(short)arg1 forPluginType:(struct LgPluginID)arg2;
- (short)defaultEditorForPluginType:(struct LgPluginID)arg1;
- (void)updateDefaultScaleFactor:(double)arg1 forPluginType:(struct LgPluginID)arg2;
- (double)defaultScaleFactorForPluginType:(struct LgPluginID)arg1;
- (id)peerControllers;
- (void)setIsSlaved_local:(BOOL)arg1;
- (id)getSideChainName:(struct AUDIOPLUGIN *)arg1;
- (struct SAUCONFPLUGIN *)getSongPlugInPointer:(struct AUDIOPLUGIN *)arg1;
- (void)pluginControlActionCall:(id)arg1;
- (void)pluginControlActionCallForControl:(long long)arg1 withValue:(int)arg2;
- (void)setPluginControlValue:(int)arg1 forControlID:(long long)arg2;
- (int)pluginControlValueForControlID:(long long)arg1;
- (void)setPluginMenuEnabled:(BOOL)arg1 forMenuID:(long long)arg2;
- (void)setPluginControlEnabled:(BOOL)arg1 forControlID:(long long)arg2;
- (BOOL)pluginControlEnabledForControlID:(long long)arg1;
- (void)localMenuItemAction:(id)arg1;
- (void)pluginMenuItemCall:(id)arg1 pluginMenuID:(long long)arg2;
- (void)pluginMenuItemCall_PresetList:(id)arg1;
- (void)pluginMenuItemCall_SideChain:(id)arg1;
- (void)pluginMenuItemCall_ViewOptions:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)pluginCommandAction:(int)arg1;
- (BOOL)pluginCommandIsValid:(int)arg1;
- (void)updatePluginMenu_presetList:(id)arg1;
- (void)updatePluginMenu_sideChain:(id)arg1 forMenu:(id)arg2;
- (void)updatePluginMenu_viewOptions:(id)arg1;
- (void)updatePluginMenu_viewOptions_scalePresets:(id)arg1;
- (BOOL)allowsDownsizing;
- (void)updatePluginMenu_viewOptions_editors:(id)arg1;
- (void)updatePluginMenu_viewOptions_title:(id)arg1;
- (id)extParGroup_private:(int)arg1;
- (id)extParElemDict_private:(int)arg1;
- (struct CSong *)getSongOfPlugInWindow;
@property BOOL isSlaved;
- (int)selectedPepperSegmentTag;
@property(readonly) BOOL isMidiInsert;
@property(readonly) int insert;
@property(readonly) int channelStripIndex;
- (id)plugWindowID;
- (void)updateConfBtns:(id)arg1;
- (id)confBtnDict_local:(struct AUDIOPLUGIN *)arg1;
- (void)storeCompareStateForClose;
- (id)getPresetNameAndPath_local:(struct AUDIOPLUGIN *)arg1;
- (id)getPresetName_local:(struct AUDIOPLUGIN *)arg1;
- (void)setWindowTitle_local:(struct AUDIOPLUGIN *)arg1;
- (id)windowTitle_local:(struct AUDIOPLUGIN *)arg1;
- (struct AUDIOPLUGIN *)getPlugInPointer;
- (BOOL)showsViewOptionsPopup;
- (BOOL)showsLinkButton;
- (BOOL)hasPresets;
- (void)handleActionForPluginControl:(long long)arg1 withValue:(long long)arg2;
- (void)switchEditorToPluginAtSlot:(unsigned int)arg1;
- (BOOL)displaysMinimalControls;
- (BOOL)showsControlsArea;
- (BOOL)showsControlsView;
- (BOOL)showsNoControlsDisplay;
- (BOOL)hidesPresetPopup;
- (double)pluginViewMaxHeight;
- (double)pluginViewMinHeight;
- (double)pluginViewHeight;
- (double)pluginViewMaxWidth;
- (double)pluginViewMinWidth;
- (double)setPluginViewWidth:(double)arg1;
- (double)pluginViewWidth;
- (void)updateStoredPluginViewScaleFactor:(double)arg1;
- (BOOL)hasResizablePluginView;
- (id)pluginView;
- (id)confBtnDict;
- (BOOL)showsMultiMonoBar;
- (id)multiMonoConfigurationView;
- (BOOL)showsMultiMonoConfigurationView;
- (BOOL)showsSideChain;
- (BOOL)isPanner;
- (BOOL)isInstrument;
- (BOOL)showsBypassButton;
- (BOOL)isPepper;
- (int)numPepperSlots;
- (id)pluginNameAtSlot:(int)arg1;
- (BOOL)isLevelMeter;
- (id)menuItemCall_extPar:(id)arg1 forCallID:(int)arg2;
- (void)updateMenu_extPar:(id)arg1 forCallID:(int)arg2;
- (void)extParValueResetForCallID:(long long)arg1;
- (void)extParValueChangedByUser:(long long)arg1 forCallID:(long long)arg2;
- (long long)extParValueFromString:(id)arg1 forCallID:(long long)arg2;
- (id)stringFromExtParValue:(long long)arg1 forCallID:(long long)arg2;
- (int)valueForParameterControlWithID:(long long)arg1;
- (id)quickHelpIDForControlWithID:(long long)arg1;
- (void)updatePluginControlsViewMenu:(id)arg1 withTag:(int)arg2;
- (id)nameForSelectedEditor;
- (void)showExtendedParameters:(BOOL)arg1;
- (BOOL)extendedParametersShown;
- (BOOL)extendedParametersEnabled;
- (id)extParGroups;
- (unsigned long long)numberOfExtendedParameterColumns;
- (unsigned long long)numberOfVisibleExtendedParameterRows;
- (unsigned long long)numberOfExtendedParameters;
- (BOOL)hasExtendedParameters;
- (id)newMenuWithItemTitles:(id)arg1;
- (void)popUpPluginParameterMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (id)newPluginParameterMenuWithTarget:(id)arg1 andCallID:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

