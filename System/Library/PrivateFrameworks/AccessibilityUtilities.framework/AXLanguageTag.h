/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableOrderedSet, AXDialectMap;

@interface AXLanguageTag : NSObject <NSCopying> {

	BOOL _wasPredicted;
	BOOL _createdFromNewline;
	NSString* _content;
	NSMutableOrderedSet* _unambiguousDialects;
	NSMutableOrderedSet* _ambiguousDialects;
	NSMutableOrderedSet* _predictedSecondaryDialects;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic,__weak) NSString * content;                                        //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unambiguousDialects;                        //@synthesize unambiguousDialects=_unambiguousDialects - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ambiguousDialects;                          //@synthesize ambiguousDialects=_ambiguousDialects - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * predictedSecondaryDialects;                 //@synthesize predictedSecondaryDialects=_predictedSecondaryDialects - In the implementation block
@property (nonatomic,__weak,readonly) AXDialectMap * preferredAmbiguousDialect; 
@property (nonatomic,__weak,readonly) AXDialectMap * preferredUnambiguousDialect; 
@property (nonatomic,__weak,readonly) NSString * contentSubstring; 
@property (nonatomic,__weak,readonly) AXDialectMap * dialect; 
@property (assign,nonatomic) BOOL wasPredicted;                                                //@synthesize wasPredicted=_wasPredicted - In the implementation block
@property (assign,nonatomic) BOOL createdFromNewline;                                          //@synthesize createdFromNewline=_createdFromNewline - In the implementation block
+(id)tagWithDialects:(id)arg1 range:(NSRange)arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)content;
-(NSRange)range;
-(void)setContent:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)canBeSpokenByLanguage:(id)arg1 ;
-(AXDialectMap *)dialect;
-(BOOL)wasPredicted;
-(BOOL)createdFromNewline;
-(NSString *)contentSubstring;
-(void)setWasPredicted:(BOOL)arg1 ;
-(void)addAmbiguousDialect:(id)arg1 ;
-(void)addUnambiguousDialect:(id)arg1 ;
-(NSMutableOrderedSet *)ambiguousDialects;
-(NSMutableOrderedSet *)unambiguousDialects;
-(AXDialectMap *)preferredUnambiguousDialect;
-(AXDialectMap *)preferredAmbiguousDialect;
-(void)setUnambiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(void)setAmbiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)predictedSecondaryDialects;
-(void)setPredictedSecondaryDialects:(NSMutableOrderedSet *)arg1 ;
-(BOOL)canBeSpokenByDialect:(id)arg1 ;
-(BOOL)hasAmbigiousDialects;
-(void)addAmbiguousDialects:(id)arg1 ;
-(void)addPredictedSecondaryDialects:(id)arg1 ;
-(void)setCreatedFromNewline:(BOOL)arg1 ;
@end

