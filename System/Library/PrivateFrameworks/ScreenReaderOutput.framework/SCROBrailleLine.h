/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/BRLTBrailleTranslationDelegateProtocol.h>
#import <libobjc.A.dylib/BRLTBrailleStateManagerDelegate.h>

@protocol SCROBrailleDriverProtocol, BRLTBrailleStateManagerDelegate;
@class NSData, NSMutableAttributedString, SCROBrailleLineVirtualStatus, BRLTBrailleStateManager, SCROBrailleFormatter, NSMutableArray, NSAttributedString, NSString;

@interface SCROBrailleLine : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate> {

	id<SCROBrailleDriverProtocol> _brailleDriver;
	long long _size;
	long long _statusSize;
	long long _insetSize;
	long long _lineOffset;
	long long _leftInset;
	long long _rightInset;
	long long _masterStatusCellIndex;
	long long _iBeamLocation;
	long long _focusLocation;
	NSRange _focusRange;
	NSRange _selectionRange;
	int _displayMode;
	int _lineFocus;
	BOOL _displayEnabled;
	BOOL _needsDisplayFlush;
	BOOL _needsStatusFlush;
	BOOL _needsFocusFlush;
	BOOL _blink;
	BOOL _currentUnread;
	BOOL _anyUnread;
	BOOL _isPanning;
	BOOL _showDotsSevenAndEight;
	BOOL _brailleChunksAreDirty;
	char* _displayBuffer;
	char* _mainCellsBuffer;
	char* _displayFilter;
	char* _blinkerBuffer;
	char* _statusFilter;
	NSData* _statusData;
	NSMutableAttributedString* _lineBuffer;
	id _appToken;
	long long _firstToken;
	long long _lastToken;
	SCROBrailleLineVirtualStatus* _virtualStatus;
	BRLTBrailleStateManager* _stateManager;
	SCROBrailleFormatter* _brailleFormatter;
	BOOL _wordWrapEnabled;
	BOOL _isSingleLetterInputOn;
	BOOL _isTextSearchModeOn;
	BOOL _editableFieldInterruptedByAlert;
	unsigned long long _generationID;
	id<BRLTBrailleStateManagerDelegate> _translationDelegate;
	NSMutableArray* _pendingBrailleStringDictionaries;

}

@property (nonatomic,readonly) BRLTBrailleStateManager * stateManager; 
@property (nonatomic,retain) NSMutableArray * pendingBrailleStringDictionaries;                           //@synthesize pendingBrailleStringDictionaries=_pendingBrailleStringDictionaries - In the implementation block
@property (assign,nonatomic) BOOL editableFieldInterruptedByAlert;                                        //@synthesize editableFieldInterruptedByAlert=_editableFieldInterruptedByAlert - In the implementation block
@property (nonatomic,readonly) BOOL needsDisplayFlush;                                                    //@synthesize needsDisplayFlush=_needsDisplayFlush - In the implementation block
@property (assign,nonatomic) BOOL displayEnabled;                                                         //@synthesize displayEnabled=_displayEnabled - In the implementation block
@property (assign,nonatomic) BOOL wordWrapEnabled;                                                        //@synthesize wordWrapEnabled=_wordWrapEnabled - In the implementation block
@property (assign,nonatomic) BOOL isSingleLetterInputOn;                                                  //@synthesize isSingleLetterInputOn=_isSingleLetterInputOn - In the implementation block
@property (assign,nonatomic) BOOL isTextSearchModeOn;                                                     //@synthesize isTextSearchModeOn=_isTextSearchModeOn - In the implementation block
@property (assign,nonatomic) long long lineOffset;                                                        //@synthesize lineOffset=_lineOffset - In the implementation block
@property (assign,nonatomic) unsigned long long generationID;                                             //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) BOOL hasEdits; 
@property (nonatomic,readonly) BOOL wantsEdits; 
@property (assign,nonatomic,__weak) id<BRLTBrailleStateManagerDelegate> translationDelegate;              //@synthesize translationDelegate=_translationDelegate - In the implementation block
@property (nonatomic,readonly) NSAttributedString * editingString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSString *)description;
-(void)dealloc;
-(void)setFormatter:(id)arg1 ;
-(BOOL)display;
-(void)_flush;
-(void)setDisplayMode:(int)arg1 ;
-(int)displayMode;
-(void)translate;
-(unsigned long long)generationID;
-(void)setGenerationID:(unsigned long long)arg1 ;
-(BRLTBrailleStateManager *)stateManager;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)setWordWrapEnabled:(BOOL)arg1 ;
-(BOOL)wordWrapEnabled;
-(id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3 ;
-(void)setTranslationDelegate:(id<BRLTBrailleStateManagerDelegate>)arg1 ;
-(id)newLineDescriptor;
-(long long)tokenForRouterIndex:(long long*)arg1 location:(long long*)arg2 appToken:(id*)arg3 ;
-(void)discardEdits;
-(BOOL)anyUnread;
-(BOOL)currentUnread;
-(BOOL)canPanLeft;
-(BOOL)canPanRight;
-(BOOL)hasEdits;
-(NSAttributedString *)editingString;
-(void)setVirtualStatus:(id)arg1 alignment:(int)arg2 ;
-(void)setRealStatus:(id)arg1 ;
-(void)setMainSize:(long long)arg1 ;
-(void)setStatusSize:(long long)arg1 ;
-(void)setIsSingleLetterInputOn:(BOOL)arg1 ;
-(void)setIsTextSearchModeOn:(BOOL)arg1 ;
-(id)translatedBrailleForTableIdentifier:(id)arg1 ;
-(BOOL)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2 ;
-(BOOL)wantsEdits;
-(BOOL)panLeft;
-(id)appToken;
-(long long)firstToken;
-(BOOL)panRight;
-(long long)lastToken;
-(long long)lineOffset;
-(BOOL)isSingleLetterInputOn;
-(id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4 ;
-(BOOL)moveCursorLeft;
-(BOOL)moveCursorRight;
-(BOOL)moveCursorToRouterIndex:(unsigned long long)arg1 forwardToScreenReader:(out BOOL*)arg2 updateRouterLocation:(long long*)arg3 ;
-(BOOL)deleteAtCursor;
-(BOOL)forwardDeleteAtCursor;
-(BOOL)getStatusRouterIndex:(long long*)arg1 forRawIndex:(long long)arg2 ;
-(BOOL)needsDisplayFlush;
-(void)blinker;
-(id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out BOOL*)arg2 ;
-(id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out BOOL*)arg2 ;
-(void)brailleDisplayInsertedCharacter:(id)arg1 ;
-(void)brailleDisplayDeletedCharacter:(id)arg1 ;
-(void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2 ;
-(void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3 ;
-(void)scriptSelectionDidChange:(NSRange)arg1 ;
-(void)didInsertScriptString:(id)arg1 ;
-(void)setLineFocus:(int)arg1 ;
-(void)setCurrentUnread:(BOOL)arg1 ;
-(void)setAnyUnread:(BOOL)arg1 ;
-(void)setLineOffset:(long long)arg1 ;
-(void)setAppToken:(id)arg1 ;
-(int)lineFocus;
-(id<BRLTBrailleStateManagerDelegate>)translationDelegate;
-(id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(NSRange)arg4 locations:(id*)arg5 ;
-(void)_updateOffsets;
-(BOOL)_allowInset;
-(NSMutableArray *)pendingBrailleStringDictionaries;
-(BOOL)_insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2 silently:(BOOL)arg3 ;
-(BOOL)_forwardDeleteAtCursorSilently:(BOOL)arg1 ;
-(BOOL)_deleteAtCursorSilently:(BOOL)arg1 ;
-(void)enumerateWordsBetweenCharacters:(id)arg1 text:(id)arg2 inRange:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)_blink:(BOOL)arg1 ;
-(BOOL)_setMainCells:(const char*)arg1 length:(long long)arg2 ;
-(void)_flushRealStatus;
-(void)addAttributedStringToLineBuffer:(id)arg1 brailleOffset:(unsigned long long)arg2 ;
-(void)addAttributedPaddingToLineBuffer:(id)arg1 ;
-(id)_translatedTextInIsolationForBraille:(id)arg1 translationMode:(unsigned long long)arg2 ;
-(id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2 ;
-(id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 translationMode:(unsigned long long)arg3 ;
-(id)_dotDescriptionForBrailleString:(id)arg1 ;
-(id)_spokenStringForBrailleString:(id)arg1 isDelete:(BOOL)arg2 speakLiterally:(out BOOL*)arg3 ;
-(id)newLineDescriptorWithoutPadding;
-(long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2 ;
-(long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2 ;
-(NSRange)textRangeForBrailleRange:(NSRange)arg1 ;
-(void)setDisplayEnabled:(BOOL)arg1 ;
-(unsigned long long)bufferIndexForRouterIndex:(unsigned long long)arg1 ;
-(BOOL)displayEnabled;
-(BOOL)isTextSearchModeOn;
-(void)setPendingBrailleStringDictionaries:(NSMutableArray *)arg1 ;
-(BOOL)editableFieldInterruptedByAlert;
-(void)setEditableFieldInterruptedByAlert:(BOOL)arg1 ;
@end

