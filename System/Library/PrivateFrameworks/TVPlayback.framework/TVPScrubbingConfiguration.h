/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TVSPreferences;

@interface TVPScrubbingConfiguration : NSObject {

	NSString* _domain;
	TVSPreferences* _preferences;
	id _defaultsDidChangeObserver;
	long long _numberOfObservers;

}

@property (nonatomic,copy) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) TVSPreferences * preferences;                      //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic,__weak) id defaultsDidChangeObserver;               //@synthesize defaultsDidChangeObserver=_defaultsDidChangeObserver - In the implementation block
@property (assign,nonatomic) long long numberOfObservers;                       //@synthesize numberOfObservers=_numberOfObservers - In the implementation block
@property (assign,nonatomic) double padScalingFactor; 
@property (assign,nonatomic) double decelerationRate; 
@property (assign,nonatomic) double minChapterSnappingDistance; 
@property (assign,nonatomic) double maxChapterSnappingDistance; 
@property (assign,nonatomic) double chapterSnappingVelocityFactor; 
+(id)_defaultValues;
+(void)_enumerateObservableKeysWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(TVSPreferences *)preferences;
-(void)setPreferences:(TVSPreferences *)arg1 ;
-(void)setDecelerationRate:(double)arg1 ;
-(long long)numberOfObservers;
-(double)minChapterSnappingDistance;
-(double)maxChapterSnappingDistance;
-(double)chapterSnappingVelocityFactor;
-(double)_CGFloatValueForKey:(id)arg1 ;
-(void)_setCGFloat:(double)arg1 forKey:(id)arg2 ;
-(void)setNumberOfObservers:(long long)arg1 ;
-(void)_sendDidChangeNotifications;
-(void)_sendWillChangeNotifications;
-(void)setDefaultsDidChangeObserver:(id)arg1 ;
-(id)defaultsDidChangeObserver;
-(double)padScalingFactor;
-(void)setPadScalingFactor:(double)arg1 ;
-(double)decelerationRate;
-(void)setMinChapterSnappingDistance:(double)arg1 ;
-(void)setMaxChapterSnappingDistance:(double)arg1 ;
-(void)setChapterSnappingVelocityFactor:(double)arg1 ;
@end
