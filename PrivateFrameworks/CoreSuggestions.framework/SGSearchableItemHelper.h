/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSearchableItemHelper : NSObject

+ (id)deserializeAttributes:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributesAndBody:(id)arg1;
+ (id)messageIdHeaderValues:(id)arg1;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)arg1;
+ (BOOL)searchableItemIsEmpty:(id)arg1;
+ (BOOL)searchableItemIsFromSupportedAccount:(id)arg1;
+ (BOOL)searchableItemIsInDrafts:(id)arg1;
+ (BOOL)searchableItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)searchableItemIsInSent:(id)arg1;
+ (BOOL)searchableItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)searchableItemIsInTrash:(id)arg1;
+ (BOOL)searchableItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)searchableItemIsRecent:(id)arg1;
+ (BOOL)searchableItemIsRecent:(id)arg1 emailHeaders:(id)arg2;
+ (BOOL)searchableItemIsSPAM:(id)arg1;
+ (BOOL)searchableItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (BOOL)searchableItemIsValid:(id)arg1;
+ (BOOL)searchableItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (id)serializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;

@end
