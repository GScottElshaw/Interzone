//
//  AppDelegate.h
//  Interzone
//
//  Created by Gary Elshaw on 24/04/22.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;


@end

