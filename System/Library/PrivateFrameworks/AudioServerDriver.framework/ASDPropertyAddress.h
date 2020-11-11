/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDPropertyAddress : NSObject <NSCopying> {

	AudioObjectPropertyAddress _audioObjectPropertyAddress;

}

@property (nonatomic,readonly) unsigned selector; 
@property (nonatomic,readonly) unsigned scope; 
@property (nonatomic,readonly) unsigned element; 
@property (nonatomic,readonly) AudioObjectPropertyAddress audioObjectPropertyAddress;              //@synthesize audioObjectPropertyAddress=_audioObjectPropertyAddress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)selector;
-(unsigned)element;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)scope;
-(id)initWithAddress:(AudioObjectPropertyAddress)arg1 ;
-(AudioObjectPropertyAddress)audioObjectPropertyAddress;
-(id)initWithSelector:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end

