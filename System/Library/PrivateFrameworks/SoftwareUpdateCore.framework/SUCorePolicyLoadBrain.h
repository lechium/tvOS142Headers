/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyLoadBrain : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellular;
	BOOL _discretionary;
	BOOL _liveServerCatalogOnly;
	BOOL _skipPhase;
	long long _specifiedFields;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                               //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                           //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                            //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                    //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (assign,nonatomic) BOOL skipPhase;                                //@synthesize skipPhase=_skipPhase - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;              //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(BOOL)allowsCellular;
-(id)summary;
-(BOOL)discretionary;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(BOOL)liveServerCatalogOnly;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)backToDefaultsWithSkipPhaseSet:(BOOL)arg1 ;
-(long long)specifiedFields;
-(BOOL)skipPhase;
-(void)setSkipPhase:(BOOL)arg1 ;
-(void)setSpecifiedFields:(long long)arg1 ;
-(id)initWithSkipPhaseSet:(BOOL)arg1 ;
@end

