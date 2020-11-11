/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalysisPassStrategyProviding.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/SNTwoPassRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class MLModel, NSString, SNTwoPassConfiguration;

@interface SNDetectSoundRequest : NSObject <SNAnalysisPassStrategyProviding, SNAnalyzerCreating, SNTwoPassRequest, NSCopying, NSSecureCoding, SNRequest> {

	MLModel* _model;
	NSString* _soundIdentifier;
	long long _analysisPassStrategy;
	SNTwoPassConfiguration* _twoPassConfiguration;

}

@property (nonatomic,readonly) NSString * soundIdentifier;                       //@synthesize soundIdentifier=_soundIdentifier - In the implementation block
@property (nonatomic,readonly) long long analysisPassStrategy;                   //@synthesize analysisPassStrategy=_analysisPassStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SNTwoPassConfiguration * twoPassConfiguration;              //@synthesize twoPassConfiguration=_twoPassConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allValidSoundIdentifiers;
+(id)createTwoPassConfigurationWithSoundIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSoundIdentifier:(id)arg1 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;
-(long long)analysisPassStrategy;
-(id)initWithSoundIdentifier:(id)arg1 shouldUseTwoPassDetection:(BOOL)arg2 ;
-(id)initWithSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2 ;
-(id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2 ;
-(NSString *)soundIdentifier;
-(BOOL)isEqualToDetectSoundRequest:(id)arg1 ;
@end

