/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSData, NSDictionary, NSPredicate;

@interface NPKeyBag : NSObject {

	unsigned _index;
	unsigned _generation;
	NSArray* _keys;
	long long _fallbackReason;
	NSData* _updateHash;
	long long _TFOStatusOverride;
	double _lastUsedTimestamp;
	NSDictionary* _onRampMap;
	NSArray* _onRampList;
	NSPredicate* _validOnRampPredicate;
	NSPredicate* _validOnRampWithTFOPredicate;

}

@property (retain) NSDictionary * onRampMap;                               //@synthesize onRampMap=_onRampMap - In the implementation block
@property (retain) NSArray * onRampList;                                   //@synthesize onRampList=_onRampList - In the implementation block
@property (retain) NSPredicate * validOnRampPredicate;                     //@synthesize validOnRampPredicate=_validOnRampPredicate - In the implementation block
@property (retain) NSPredicate * validOnRampWithTFOPredicate;              //@synthesize validOnRampWithTFOPredicate=_validOnRampWithTFOPredicate - In the implementation block
@property (nonatomic,retain) NSArray * keys;                               //@synthesize keys=_keys - In the implementation block
@property (assign) unsigned index;                                         //@synthesize index=_index - In the implementation block
@property (assign) long long fallbackReason;                               //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) unsigned generation;                          //@synthesize generation=_generation - In the implementation block
@property (nonatomic,retain) NSData * updateHash;                          //@synthesize updateHash=_updateHash - In the implementation block
@property (assign,nonatomic) long long TFOStatusOverride;                  //@synthesize TFOStatusOverride=_TFOStatusOverride - In the implementation block
@property (assign,nonatomic) double lastUsedTimestamp;                     //@synthesize lastUsedTimestamp=_lastUsedTimestamp - In the implementation block
@property (readonly) double timeSinceLastUsed; 
-(id)init;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(unsigned)index;
-(unsigned)generation;
-(void)setIndex:(unsigned)arg1 ;
-(long long)fallbackReason;
-(void)setFallbackReason:(long long)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(NSData *)updateHash;
-(void)setUpdateHash:(NSData *)arg1 ;
-(void)removeIPv6Keys;
-(void)setTFOStatusOverride:(long long)arg1 ;
-(void)logWithMessage:(id)arg1 identifier:(id)arg2 ;
-(id)initWithOnRamps:(id)arg1 currentNetworkInfo:(id)arg2 currentEdgeIndex:(long long)arg3 currentEdgeList:(id)arg4 generation:(unsigned)arg5 identifier:(id)arg6 updateHash:(id)arg7 ;
-(long long)TFOStatusOverride;
-(NSDictionary *)onRampMap;
-(NSArray *)onRampList;
-(void)createOnRamps;
-(id)copyUsableOnRamps:(BOOL)arg1 requireTFO:(BOOL)arg2 ;
-(void)moveToNextOnRamp;
-(double)timeSinceLastUsed;
-(BOOL)updateHashMatchesEdgeSet:(id)arg1 ;
-(id)getOnRampForEndpoint:(id)arg1 ;
-(void)moveToOnRamp:(id)arg1 ;
-(double)lastUsedTimestamp;
-(void)setLastUsedTimestamp:(double)arg1 ;
-(void)setOnRampMap:(NSDictionary *)arg1 ;
-(void)setOnRampList:(NSArray *)arg1 ;
-(NSPredicate *)validOnRampPredicate;
-(void)setValidOnRampPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)validOnRampWithTFOPredicate;
-(void)setValidOnRampWithTFOPredicate:(NSPredicate *)arg1 ;
@end

