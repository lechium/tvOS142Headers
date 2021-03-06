/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSData, AVContentKeyReportGroup, NSObject, NSHashTable, NSString, NSMutableDictionary, NSMutableArray, NSMapTable;

@interface AVContentKeySessionInternal : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReference* _weakReference;
	NSURL* _storageURL;
	NSData* _appIdentifier;
	BOOL _isExpired;
	BOOL _internal;
	AVContentKeyReportGroup* _defaultContentKeyGroup;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	NSHashTable* _contentKeyRecipients;
	NSString* _keySystem;
	NSMutableDictionary* keyRequestsByRequestID;
	NSMutableArray* _contentKeyGroups;
	NSMapTable* cryptorUUIDToContentKeyRequestMap;
	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}
@end

