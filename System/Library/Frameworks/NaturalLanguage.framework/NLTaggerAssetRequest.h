/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NLTaggerAssetRequest : NSObject {

	NSString* _language;
	NSString* _tagScheme;
	/*^block*/id _completionHandler;

}
+(void)checkAssetRequests;
-(id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isFulfilled;
-(void)completeWithResult:(long long)arg1 error:(id)arg2 ;
-(void)waitForFulfillment;
@end
