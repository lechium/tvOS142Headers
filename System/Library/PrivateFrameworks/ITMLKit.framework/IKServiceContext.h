/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, IKViewElement;

@interface IKServiceContext : NSObject {

	NSDictionary* _contextDictionary;
	IKViewElement* _element;

}

@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) IKViewElement * element;                            //@synthesize element=_element - In the implementation block
-(IKViewElement *)element;
-(NSDictionary *)contextDictionary;
-(id)initWithContextDictionary:(id)arg1 element:(id)arg2 ;
@end
