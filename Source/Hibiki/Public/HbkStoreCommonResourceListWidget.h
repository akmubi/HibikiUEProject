#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStoreCommonResourceListWidget.generated.h"

class UHbkStoreCommonResourceWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreCommonResourceListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonResourceWidget* CommonResource1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonResourceWidget* CommonResource2;
    
public:
    UHbkStoreCommonResourceListWidget();

};

