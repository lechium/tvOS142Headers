/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCROConnection, NSLock, NSMutableAttributedString, NSData, SCRCTargetSelectorTimer;

@interface SCROBrailleClient : NSObject {

	SCROConnection* _connection;
	NSLock* _lock;
	id _delegate;
	NSMutableAttributedString* _mainStringPending;
	NSMutableAttributedString* _mainStringCache;
	NSData* _aggregatedStatusPending;
	NSData* _aggregatedStatusCache;
	SCRCTargetSelectorTimer* _deathTimer;
	BOOL _isReady;
	BOOL _needsDisplay;
	BOOL _keepConnectionAlive;
	BOOL _delegateWantsKeypresses;
	BOOL _delegateWantsReplaceTextRange;
	BOOL _wantsDisconnectMessage;
	BOOL _wantsReconnectMessage;
	BOOL _wantsDisplayConfigurationChanged;
	BOOL _displayDescriptorCallbackEnabled;

}

@property (assign,nonatomic) BOOL inputEightDotBraille; 
@property (assign,nonatomic) BOOL wordWrapEnabled; 
@property (assign,nonatomic) BOOL autoAdvanceEnabled; 
@property (assign,nonatomic) double autoAdvanceDuration; 
@property (assign,nonatomic) int inputContractionMode; 
+(void)logBrailleRequests:(BOOL)arg1 ;
+(id)statusAttributeDotText;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)display;
-(BOOL)isConnected;
-(BOOL)isConfigured;
-(BOOL)needsDisplay;
-(void)displayIfNeeded;
-(int)displayMode;
-(void)setTableIdentifier:(id)arg1 ;
-(Class)connectionClass;
-(void)_deathTimerHandler;
-(id)_lazyConnection;
-(void)_registerDelegate;
-(void)setMainAttributedString:(id)arg1 ;
-(id)mainAttributedString;
-(id)_getWorkingString;
-(void)_refreshAfterReconnect;
-(void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1 ;
-(void)_setupDeviceDetection;
-(void)_deviceConnected:(id)arg1 ;
-(void)setKeepConnectionAlive:(BOOL)arg1 ;
-(BOOL)keepConnectionAlive;
-(void)loadDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)removeDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(id)driverConfiguration;
-(id)pendingMainAttributedString;
-(void)setAnnouncementString:(id)arg1 ;
-(void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)pendingAggregatedStatus;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)setContractionMode:(int)arg1 ;
-(int)contractionMode;
-(void)setInputEightDotBraille:(BOOL)arg1 ;
-(BOOL)inputEightDotBraille;
-(void)setShowEightDotBraille:(BOOL)arg1 ;
-(BOOL)showEightDotBraille;
-(void)setInputContractionMode:(int)arg1 ;
-(int)inputContractionMode;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
-(BOOL)automaticBrailleTranslationEnabled;
-(void)setWordWrapEnabled:(BOOL)arg1 ;
-(BOOL)wordWrapEnabled;
-(void)setAutoAdvanceEnabled:(BOOL)arg1 ;
-(BOOL)autoAdvanceEnabled;
-(void)setAutoAdvanceDuration:(double)arg1 ;
-(double)autoAdvanceDuration;
-(unsigned)persistentKeyModifiers;
-(void)setPersistentKeyModifiers:(unsigned)arg1 ;
-(void)setLastUserInteractionTime:(double)arg1 ;
-(void)setExpandedStatusDisplayModeWithStatus:(id)arg1 ;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(BOOL)displayDescriptorCallbackEnabled;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(id)tokenArray;
-(NSRange)rangeOfCellRepresentingCharacterAtIndex:(long long)arg1 ;
-(void)setSelection:(NSRange)arg1 forToken:(long long)arg2 ;
-(void)selectAllForToken:(long long)arg1 ;
-(void)unselectAllForToken:(long long)arg1 ;
-(void)setFocused:(BOOL)arg1 forToken:(long long)arg2 ;
-(void)simulateKeypress:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3 ;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(void)resetEditingManager;
-(void)handleCallback:(id)arg1 ;
-(void)setSingleLetterInputIsOn:(BOOL)arg1 ;
-(void)setTextSearchModeIsOn:(BOOL)arg1 ;
-(void)setBrailleChordDebounceTimeout:(double)arg1 ;
-(void)translateBrailleToClipboard;
@end

