/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFResultFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying> {

	BOOL _actionEngaged;
	BOOL _matchesUnengagedSuggestion;
	unsigned long long _triggerEvent;
	unsigned long long _destination;
	unsigned long long _actionTarget;

}

@property (nonatomic,readonly) BOOL actionEngaged;                         //@synthesize actionEngaged=_actionEngaged - In the implementation block
@property (assign,nonatomic) BOOL matchesUnengagedSuggestion;              //@synthesize matchesUnengagedSuggestion=_matchesUnengagedSuggestion - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long destination;               //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long actionTarget;              //@synthesize actionTarget=_actionTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)destination;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(BOOL)actionEngaged;
-(unsigned long long)actionTarget;
-(void)setActionTarget:(unsigned long long)arg1 ;
-(id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 ;
-(id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4 ;
-(id)initWithResult:(id)arg1 actionEngaged:(BOOL)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4 ;
-(BOOL)matchesUnengagedSuggestion;
-(void)setMatchesUnengagedSuggestion:(BOOL)arg1 ;
@end

