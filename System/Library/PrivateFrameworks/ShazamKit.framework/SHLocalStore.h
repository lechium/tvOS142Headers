/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/SHStore.h>

@protocol SHLocalStoreDelegate;
@class NSArray, NSMutableArray;

@interface SHLocalStore : SHStore {

	double _minimumSignatureLength;
	NSArray* _referenceAudioMediaItems;
	NSMutableArray* _localItems;
	double _windowSeconds;
	id<SHLocalStoreDelegate> _delegate;
	long long _density;

}

@property (nonatomic,retain) NSArray * referenceAudioMediaItems;                    //@synthesize referenceAudioMediaItems=_referenceAudioMediaItems - In the implementation block
@property (nonatomic,readonly) NSMutableArray * localItems;                         //@synthesize localItems=_localItems - In the implementation block
@property (nonatomic,readonly) double windowSeconds;                                //@synthesize windowSeconds=_windowSeconds - In the implementation block
@property (assign,nonatomic,__weak) id<SHLocalStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long density;                                   //@synthesize density=_density - In the implementation block
+(id)new;
-(id)init;
-(id<SHLocalStoreDelegate>)delegate;
-(void)setDelegate:(id<SHLocalStoreDelegate>)arg1 ;
-(long long)density;
-(NSMutableArray *)localItems;
-(double)minimumSignatureLength;
-(id)createMatcher;
-(id)initWithWindowSeconds:(double)arg1 minimumSignatureLength:(double)arg2 density:(long long)arg3 ;
-(void)setReferenceAudioMediaItems:(NSArray *)arg1 ;
-(id)initWithDensity:(long long)arg1 ;
-(void)flowReferenceAudio:(id)arg1 atTime:(id)arg2 representingMediaItems:(id)arg3 ;
-(BOOL)addReferenceSignaturesBundleFromPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)addReferenceSignature:(id)arg1 representingMediaItems:(id)arg2 error:(id*)arg3 ;
-(NSArray *)referenceAudioMediaItems;
-(double)windowSeconds;
@end

