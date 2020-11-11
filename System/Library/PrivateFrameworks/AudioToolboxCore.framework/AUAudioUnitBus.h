/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class AVAudioFormat, NSArray, NSString, AUAudioUnit;

@interface AUAudioUnitBus : NSObject {

	BOOL _removingObserverWithContext;
	AVAudioFormat* _format;
	NSArray* _supportedChannelCounts;
	unsigned _maximumChannelCount;
	BOOL _enabled;
	BOOL _shouldAllocateBuffer;
	NSString* _name;
	unsigned long long _index;
	long long _busType;
	AUAudioUnit* _ownerAudioUnit;
	NSArray* _supportedChannelLayoutTags;
	double _contextPresentationLatency;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (assign,nonatomic) vector<BusPropertyObserver observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) AVAudioFormat * format; 
@property (assign,nonatomic) BOOL shouldAllocateBuffer;                                //@synthesize shouldAllocateBuffer=_shouldAllocateBuffer - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long busType;                                      //@synthesize busType=_busType - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                           //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedChannelLayoutTags;              //@synthesize supportedChannelLayoutTags=_supportedChannelLayoutTags - In the implementation block
@property (assign,nonatomic) double contextPresentationLatency;                        //@synthesize contextPresentationLatency=_contextPresentationLatency - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(unsigned long long)index;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)isEnabled;
-(AVAudioFormat *)format;
-(void)setIndex:(unsigned long long)arg1 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(vector<BusPropertyObserver)observers;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(id)initWithFormat:(id)arg1 error:(id*)arg2 ;
-(AUAudioUnit *)ownerAudioUnit;
-(long long)busType;
-(void)setOwnerAudioUnit:(AUAudioUnit *)arg1 ;
-(void)setBusType:(long long)arg1 ;
-(void)setSupportedChannelCounts:(id)arg1 ;
-(id)supportedChannelCounts;
-(unsigned)maximumChannelCount;
-(void)setMaximumChannelCount:(unsigned)arg1 ;
-(BOOL)shouldAllocateBuffer;
-(void)setShouldAllocateBuffer:(BOOL)arg1 ;
-(NSArray *)supportedChannelLayoutTags;
-(double)contextPresentationLatency;
-(void)setContextPresentationLatency:(double)arg1 ;
@end

