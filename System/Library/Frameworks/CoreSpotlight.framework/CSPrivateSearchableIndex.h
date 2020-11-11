/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CSSearchableIndex.h>

@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex {

	BOOL _attemptedIndexPathResolution;
	int _resolvedIndexPathErrorCode;
	NSString* _resolvedIndexPath;
	NSString* _indexPath;
	CSIndexConnection* _savedConnection;

}

@property (assign) BOOL attemptedIndexPathResolution;                          //@synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                     //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (assign,nonatomic) int resolvedIndexPathErrorCode;                   //@synthesize resolvedIndexPathErrorCode=_resolvedIndexPathErrorCode - In the implementation block
@property (nonatomic,retain) NSString * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) CSIndexConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
+(id)defaultSearchableIndex;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)indexPath;
-(id)connection;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)setIndexPath:(NSString *)arg1 ;
-(void)setAttemptedIndexPathResolution:(BOOL)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setSavedConnection:(CSIndexConnection *)arg1 ;
-(BOOL)attemptedIndexPathResolution;
-(int)resolvedIndexPathErrorCode;
-(void)setResolvedIndexPathErrorCode:(int)arg1 ;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(CSIndexConnection *)savedConnection;
@end

