/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {

	NSRegularExpression* _regex;
	NSArray* _parameterNames;
	NSString* _scheme;

}
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithString:(id)arg1 scheme:(id)arg2 ;
-(id)nonParameterCharacterSet;
-(BOOL)matchesURL:(id)arg1 parameters:(id*)arg2 ;
@end

