/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	BOOL _unifyResults;
	NSArray* _keys;
	CNContactStore* _contactStore;

}
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)objectsRepresentedByBatch:(id)arg1 ;
@end

