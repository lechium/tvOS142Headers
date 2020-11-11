/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {

	NSMutableDictionary* _classMap;
	NSMutableDictionary* _typeMap;
	NSMutableDictionary* _dependentMap;

}
-(id)init;
-(Class)elementClassByTagName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
-(BOOL)isDependentByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
@end

