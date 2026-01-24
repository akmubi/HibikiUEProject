#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkHowToPlayCategory.h"
#include "HbkHowToPlayInfoList.h"
#include "HowToPlayControllerLoadCompleteDelegateDelegate.h"
#include "HowToPlayNoticeDelegateDelegate.h"
#include "HbkHowToPlayController.generated.h"

class UDataTable;
class UHbkHowtoPlayListWidget;

UCLASS(Blueprintable)
class UHbkHowToPlayController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHowToPlayNoticeDelegate OnClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHowToPlayControllerLoadCompleteDelegate OnloadCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkHowToPlayCategory, UDataTable*> HowToPlayListMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkHowtoPlayListWidget> HowToPlayWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkHowToPlayCategory, FHbkHowToPlayInfoList> HowToPlayInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkHowtoPlayListWidget* HowToPlayWidget;
    
public:
    UHbkHowToPlayController();

    UFUNCTION(BlueprintCallable)
    void Receive_OnWidgetClosed();
    
};

