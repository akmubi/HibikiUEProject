#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_SaveItem.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkItemObj_SaveItem : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveWithUniqueName;
    
    UHbkItemObj_SaveItem();

    UFUNCTION(BlueprintCallable)
    bool Invoke_SaveItem(AActor* SaveActor);
    
    UFUNCTION(BlueprintCallable)
    bool Invoke_IsAlreadySave(AActor* SaveActor);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_GetSaveParam(AActor* SaveActor, FName& OutName, int32& OutAmount);
    
};

