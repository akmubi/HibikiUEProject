#pragma once
#include "CoreMinimal.h"
#include "HbkAchievementsWidgetOnCloseDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkShowAchievementsTask.generated.h"

class UHbkAchievementsWidget;
class UHbkShowAchievementsTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowAchievementsTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAchievementsWidgetOnClose OnCloseAchievements;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkAchievementsWidget> AchievementsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkAchievementsWidget* AchievementsWidget;
    
public:
    UHbkShowAchievementsTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowAchievementsTask* ShowAchievements(UObject* WorldContextObject, TSubclassOf<UHbkAchievementsWidget> WidgetClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseAchievements();
    
};

