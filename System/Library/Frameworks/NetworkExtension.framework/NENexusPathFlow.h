/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow {

	NWPath* _path;

}

@property (retain) NWPath * path;              //@synthesize path=_path - In the implementation block
-(NWPath *)path;
-(void)setPath:(NWPath *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)endpoint;
-(id)parameters;
-(id)clientIdentifier;
@end

